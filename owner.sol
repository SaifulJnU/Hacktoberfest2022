// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

contract Ownable{

    address public owner;
    address[] internal previousOwner;

    constructor(){
        owner = msg.sender;
    }

    modifier onlyOwner(){
        require(msg.sender == owner, "Not owner!!..");
        _;
    } 

    function setOwner(address newOwner) external onlyOwner{
        require(newOwner != address(0),"Invalid Address!");
        require(owner != newOwner, "This account is already the owner!!");
        previousOwner.push(owner);
        owner = newOwner;
    }

    function viewPrevOwners() external view returns(address[] memory){
        
        return previousOwner;
    }
}
