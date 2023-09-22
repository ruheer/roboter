$fn = 50;
w = 14;
d= 18;
h=0.2;
r=2.5;

wall = 0.25;

module GroundPlate(){
    cube([w, d, h]);
    translate([wall/2, wall/2, 0.1]){
        cube([w-wall, d-wall, h]);
    }
    for(i =[0, w-1.1]){
        difference(){
        translate([i, 7, 0.3]){
            cube(1);
                translate([0.25+i/(w-1)*0.5, 0.5, 0.5]){
                    rotate([0,90, 0]){
                       cylinder(0.75, 0.25, 0.25, center = true);
                    }
              }
        }
     }
    }
    for(i = [2, w-3]){
        translate([i, d-1-wall/2, 0.3]){
            cube(1);
        }
    }
}
difference(){
    GroundPlate();
    for(i=[0, w-4]){
      translate([i,14, 0.5]){
          rotate([0,90,0]){
            #cylinder(4, r, r);  
          }
      }
  }
}