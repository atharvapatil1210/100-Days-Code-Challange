#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int arr[MAX_SIZE] = {10, 20, 30, 40, 50}; // Initial array
int size = 5;

GtkWidget *entry_pos, *entry_element, *text_view;
GtkTextBuffer *buffer;

// Function to display array elements
void display_array() {
    char output[500] = "Array: ";
    char temp[10];

    for (int i = 0; i < size; i++) {
        sprintf(temp, "%d ", arr[i]);
        strcat(output, temp);
    }

    GtkTextIter iter;
    gtk_text_buffer_set_text(buffer, output, -1);
}

// Function to insert an element
void insert_element(GtkWidget *widget, gpointer data) {
    int pos = atoi(gtk_entry_get_text(GTK_ENTRY(entry_pos)));
    int element = atoi(gtk_entry_get_text(GTK_ENTRY(entry_element)));

    if (pos < 1 || pos > size + 1) {
        gtk_text_buffer_set_text(buffer, "Invalid Position!", -1);
        return;
    }

    for (int i = size - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = element;
    size++;
    display_array();
}

// Function to delete an element
void delete_element(GtkWidget *widget, gpointer data) {
    int pos = atoi(gtk_entry_get_text(GTK_ENTRY(entry_pos)));

    if (pos < 1 || pos > size) {
        gtk_text_buffer_set_text(buffer, "Invalid Position!", -1);
        return;
    }

    for (int i = pos - 1; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;
    display_array();
}

int main(int argc, char *argv[]) {
    GtkWidget *window, *grid, *btn_insert, *btn_delete, *label_pos, *label_element, *scroll_win;

    gtk_init(&argc, &argv);

    // Create main window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Array Operations");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Create a grid layout
    grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window), grid);

    // Labels
    label_pos = gtk_label_new("Position:");
    label_element = gtk_label_new("Element:");

    // Entry fields
    entry_pos = gtk_entry_new();
    entry_element = gtk_entry_new();

    // Buttons
    btn_insert = gtk_button_new_with_label("Insert");
    btn_delete = gtk_button_new_with_label("Delete");

    // Text view for displaying the array
    text_view = gtk_text_view_new();
    buffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(text_view));
    gtk_text_view_set_editable(GTK_TEXT_VIEW(text_view), FALSE);
    gtk_text_view_set_cursor_visible(GTK_TEXT_VIEW(text_view), FALSE);

    scroll_win = gtk_scrolled_window_new(NULL, NULL);
    gtk_container_add(GTK_CONTAINER(scroll_win), text_view);
    gtk_widget_set_size_request(scroll_win, 200, 100);

    // Attach widgets to the grid
    gtk_grid_attach(GTK_GRID(grid), label_pos, 0, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry_pos, 1, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), label_element, 0, 1, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry_element, 1, 1, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), btn_insert, 0, 2, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), btn_delete, 1, 2, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), scroll_win, 0, 3, 2, 1);

    // Connect buttons to functions
    g_signal_connect(btn_insert, "clicked", G_CALLBACK(insert_element), NULL);
    g_signal_connect(btn_delete, "clicked", G_CALLBACK(delete_element), NULL);

    // Show all widgets
    gtk_widget_show_all(window);

    // Display the initial array
    display_array();

    // Start GTK main loop
    gtk_main();

    return 0;
}
