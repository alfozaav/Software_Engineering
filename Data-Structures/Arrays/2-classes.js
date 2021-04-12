// this === window => this.alert()

class Person {
  constructor(name, lastName) {
    this.name = name;
    this.lastName = lastName;
  }

  introduce() {
    console.log(`Hi my name is ${this.name} ${this.lastName}`);
  }
}

class Player extends Person {
  constructor(name, lastName, type) {
    super(name, lastName);
    this.type = type;
  }

  play() {
    console.log(`I'm a ${this.type} player`);
  }
}

let cristofer = new Player('Cristofer', 'Nava', 'runner');
cristofer.introduce();
cristofer.play();