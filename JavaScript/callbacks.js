function x(z){
  console.log('x');
  z();
}

x(function y(){
  console.log('y');
})