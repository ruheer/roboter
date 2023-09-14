x_max = 120;
y_max = 200;
x_ardu = 69;
y_ardu = 53;
h_ardu = 3;
h_max = 5;
r_sup = 4;
module Arduino(){
    cube([x_ardu,y_ardu,h_ardu]);
    }
module biggest(){
    cube([x_max,y_max,h_max]);
    }

module connection(){
    cylinder(30,r_sup,r_sup,r_sup);
    }
    
translate([-x_ardu/2,y_max/2 -y_ardu,30])
    Arduino();
translate([-x_max/2,-y_max/2])
    biggest();
translate([x_max/2 - x_ardu/2 + r_sup,y_max/2- r_sup,0])
    connection();
translate([-x_max/2 + x_ardu/2 - r_sup,y_max/2-r_sup,0 ])
    connection();
translate([x_max/2 - x_ardu/2+r_sup,y_max/2-y_ardu+r_sup,0])
    connection();
translate([-x_ardu/2+r_sup,y_max/2-y_ardu+r_sup,0])
    connection();