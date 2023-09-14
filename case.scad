$fn=50;

w=10;
h=10;
d=6;
r=1.5;
wall = 0.25;
difference(){
    cube([w, h, d]);
    translate([wall, wall, -wall]){
        cube([w-wall*2,h-wall*2,d-wall]);
    }
    translate([0,-1,6]){
        rotate([0,90,0]){
            resize([12,10,h])cylinder(5);
        }
    }
    translate([0,7,0.5]){
        rotate([0,90,0]){
           cylinder(w*2, r,r , center = true);
            
        }
    }
    translate([0,3,0.5]){
        rotate([0,90,0]){
            cylinder(w, 0.25, 0.25, centre = true);
        }
    }
    translate([8,10,0.5]){
        rotate([90,0,0]){
            cylinder(2, 0.25, 0.25, centre = true);
        }
    }
    translate([2,10,0.5]){
        rotate([90,0,0]){
            cylinder(2, 0.25, 0.25, centre = true);
        }
    }
}
difference(){
    translate([0,-1,6]){
        rotate([0,90,0]){
           resize([13,11,h])cylinder(5); 
        }
    }
     translate([0,-1,6]){
         rotate([0,90,0]){ 
           resize([12,10,h])cylinder(5); 
        }
    }
    translate([0, -10, -1]){
      cube([w,h,d+10]);  
    }
    translate([0,-1,d]){
        cube([w, h+5, 2*d]);
    }
    translate([0,0,-1]){
        cube([w,h, 1]);
    }
}
