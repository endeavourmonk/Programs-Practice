function myfunc(i) {
  let promise = new Promise((resolve, reject) => {
    setTimeout(() => {
      if (i == 2)
        resolve('correct value')
      else {
        let err = new Error('No correct value provided')
        reject(err)
      }
    }, 3000);
  })
  return promise;
}

(async () => {
  let res = await myfunc(2);
  console.log(res);
})();