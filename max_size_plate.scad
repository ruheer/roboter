use <BOSL/shapes.scad>

module Arduino(){
    cube([6.858,5.334,0.5]);
    }
module biggest(){
    cube([10,10,0.1]);
    }
module dreadboard(){
    cube([9,9,0.5]);
    }
module connection(){
    cylinder(2,0.2,0.2,0.2);
    }
    translate([-3.429,-2.667,2.5])
Arduino();
    translate([-5,-5,-0.1])
biggest();
    translate([-4.5,-4.5,0])
    dreadboard();
    translate([-3.229,-2.467,0.5])
    connection();
    translate([3.229,-2.467,0.5])
    connection();
    translate([-3.229,2.467,0.5])
    connection();
    translate([3.229,2.467,0.5])
    connection();