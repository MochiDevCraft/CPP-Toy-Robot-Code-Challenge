# Toy Robot C++ Code Challenge

## Description and requirements:
&nbsp;&nbsp;&nbsp; The application is a simulation of a toy robot moving on a square table top, of dimensions 5 units x 5 units. There are no other obstructions on the table surface. The robot is free to roam around the surface of the table, but must be prevented from falling to destruction. Any movement that would result in the robot falling from the table must be prevented, however further valid movement commands must still be allowed.

---
## Constraints
&nbsp;&nbsp;&nbsp; The toy robot must not fall off the table during movement. This also includes the initial placement of the toy robot. Any
move that would cause the robot to fall must be ignored

---
## Commands

* PLACE X,Y,FACING_DIRECTION
    * Sample: 
      * PLACE 1,1,NORTH
* MOVE 
    * moves 1 step forward in the facing direction
* LEFT 
    * rotates facing direction -90°  
* RIGHT
    * rotates facing direction +90°  
* REPORT
    * Outputs current position: X,Y,FACING_DIRECTION
    * Sample : 
      * OUTPUT: 1,1,NORTH

---
## Example Input and Output: 

```
a)----------------
PLACE 0,0,NORTH
MOVE
REPORT
Output: 0,1,NORTH

b)----------------
PLACE 0,0,NORTH
LEFT
REPORT
Output: 0,0,WEST

c)----------------
PLACE 1,2,EAST
MOVE
MOVE
LEFT
MOVE
REPORT
Output: 3,3,NORTH
```

---
## Extending the solution
### TO DO : 
- [ ] Make a sizeable Table
- [ ] Add multiple Robot in the Table
- [ ] Add more diagonal Direction
- [ ] Add obstacle
- [ ] Support different shape table
- [ ] Add 3rd Dimension
- [ ] Macros - New Commands 
  
  * Move Double
  * Square Loop
  * Move Diagonal

---
## Requirements and Setting up the project
* VS Code 
  *  Follow how to setup C++ [here](https://code.visualstudio.com/docs/languages/cpp)
