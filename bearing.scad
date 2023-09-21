r1 = 2.2/2;
height1=0.7;

r2=1.87/2;
height2=0.8;

r3=1.1/2;
height3=1.9+r2;

$fn=80;
cylinder(height1, r1, r1);

translate([0, 0, height1]){
    difference(){
        cylinder(height2, r2, r2);
        translate([0, 0, 0.15]){
            for(i=[1:5]){
                rotate([0, 0, (360/5)*i]){
                    translate([r2/2, 0, height2/2]){
                        cube([r2, 0.32, height2], center=true);
                    }
                }
            }
        }
    }
    cylinder(height3, r3, r3);
}
