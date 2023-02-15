class Programmer {
  constructor() {
    console.log("I am a programmer");
  }

  introduce(name, country) {
    console.log(`I am ${name} from ${country}`);
  }
}

class webDev extends Programmer {
  constructor() {
    console.log("I am a webDev");
    super();
  }
  exp(yrs) {
    console.log(`I am in tech industry for ${yrs} years.`);
  }
}

let a = new Programmer();
a.introduce("Ujjawal", "India");

let b = new webDev();
b.introduce("Raj", "Poland");
b.exp(5);
