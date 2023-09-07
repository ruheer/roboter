$fn=50;

w=10;
h=10;
d=6;
difference(){
    cube([w, h, d]);
    translate([0.5, 0.5, -0.5]){
        cube([w-1,h-1,d-1]);
    }
    translate([0,-1,6]){
        rotate([0,90,0]){
            #resize([12,10,h])cylinder(5);
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
}