$fn=50;

w=14;
h=18;
d=6;
r=2.5;
wall = 0.25;
sR = 0.8;
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
    translate([0,15,0.5]){
        rotate([0,90,0]){
           cylinder(w*2, r,r , center = true);
            
        }
    }
    translate([7,7,0.5]){
        rotate([0,90,0]){
            #cylinder(w, 0.2, 0.2, center = true);
        }
    }
    translate([w-2,h,0.5]){
        rotate([90,0,0]){
            cylinder(2, 0.2, 0.2, center = true);
        }
    }
    translate([2 ,h,0.5]){
        rotate([90,0,0]){
            cylinder(2, 0.2, 0.2, center = true);
        }
    }
}
difference(){
    translate([0,-1,6]){
        rotate([0,90,0]){
           resize([13,11,w])cylinder(5); 
        }
    }
    
    translate([0,-1,6]){
         rotate([0,90,0]){ 
           resize([12,10,w])cylinder(5); 
        }
    }
    
    translate([0, -h, -1]){
        cube([w,h,d+10]);  
    }
    translate([0,-1,d]){
        cube([w, h+5, 2*d]);
    }
    translate([0,0,-1]){
        cube([w,h, 1]);
    }
    rotate([90, 0,0]){
        translate([w/2-1.5, 4, -7]){
            #cylinder(5,sR,sR);
        }
        translate([w/2+1, 4, -7]){
            #cylinder(5,sR,sR);
        } 
    }
}
