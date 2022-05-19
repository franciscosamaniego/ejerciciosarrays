size(400,400);
background(255);
int n = 100;
ellipseMode(RADIUS);
noStroke();
for(int i = 0; i < n; i++) {
  int r = (int) ((Math.random() * 50)) + 10;
  int x = (int) (Math.random() * 401);
  int y = (int) (Math.random() * 401);
  int red = (int) (Math.random() * 256);
  int green = (int) (Math.random() * 256);
  int blue = (int) (Math.random() * 256);
  fill(red,green,blue);
  ellipse(x,y,r,r);
}
