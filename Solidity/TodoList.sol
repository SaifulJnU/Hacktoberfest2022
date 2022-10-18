pragma solidity ^0.5.0;

contract Todo{
    uint public count=0;

    struct Task{
        uint id;
        string content;
        bool completed;
    }

    mapping (uint=>Task) public tasks;

    event TaskCreated(
        uint id,
        string content,
        bool completed
     );

    
    event ToggleCompleted(
        uint id,
        bool completed
     );
     

    constructor () public {
        createTask("Checking the create task method () ");
    }

    function createTask(string memory _content) public {
        count++;
        tasks[count]=Task(count,_content,false);
        emit TaskCreated(count, _content, false);
    }

    function toggle(uint _id) public {
        Task memory _task=tasks[_id];
        _task.completed= ! _task.completed;
        tasks[_id]=_task;
        emit ToggleCompleted(_id,_task.completed);
    }
}
