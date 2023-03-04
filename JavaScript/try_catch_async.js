try {
  console.log("Hello World!");
} catch (error) {
  console.log(error);
}

try {
  console.log(Hello);
} catch (error) {
  console.log(error);
}
console.log("Done");
try {
  setTimeout(() => {
    try {
      console.log(Hello);
    } catch (error) {
      console.log(error, " :error inside setTimeout");
    }
  }, 1000);
} catch (error) {
  console.log(error);
}finally{
    console.log("I need to be executed");
}
console.log("done");
