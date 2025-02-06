from flask import Flask, render_template, request, jsonify

app = Flask(__name__)

# Function to implement Round Robin scheduling using list-based queue
def round_robin(processes, time_quantum):
    queue = processes[:]  # Creating a copy of the list to act as a queue
    time = 0  # Track the total time
    
    while queue:
        process = queue.pop(0)  # Dequeue: remove the first element in the list
        
        if process['remainingTime'] > time_quantum:
            time += time_quantum
            process['remainingTime'] -= time_quantum
            queue.append(process)  # Enqueue: put the process back at the end of the list
        else:
            time += process['remainingTime']
            process['turnaroundTime'] = time
            process['waitingTime'] = time - process['burstTime']
            process['remainingTime'] = 0  # Process completed
            
    return processes

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/run_round_robin', methods=['POST'])
def run_round_robin():
    data = request.get_json()
    processes = data['processes']
    time_quantum = data['timeQuantum']
    
    # Run Round Robin and calculate waiting and turnaround time
    result = round_robin(processes, time_quantum)
    
    return jsonify({'processes': result})

if __name__ == '__main__':
    app.run(debug=True)
