class Computer {
  constructor(name) {
    console.log("Computer");
    this._name = name;
  }

  get name() {
    return this._name;
  }
  set name(name) {
    this._name = name;
  }
}

let a = new Computer("Lenovo");
let b = a.name;
console.log(b);
console.log(a instanceof Computer);
a.name = "ASUS";
b = a.name;
console.log(b);
