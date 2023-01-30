const val = 2;
let promise = func1(val);

promise.then((msg) => console.log(msg)).catch((err) => console.log(err));

function func1(val) {
  const pr = new Promise(function (resolve, reject) {
    // rejecting promise
    if (val <= 2) {
      const err = new Error("Your value is less than 2.");
      reject(err);
    }

    // resolving promise
    let msg = "successfully accepted";
    if (val > 2) {
      resolve(msg);
    }
  });
  return pr;
}
