// Own version of the array data structure

class MyArray {
  constructor() {
    this.length = 0;
    this.data = {};
  }

  push(element) {
    this.data[this.length] = element;
    this.length++;
    return this.length;
  }

  get(index) {
    return this.data[index];
  }

  pop() {
    let value = this.data[this.length - 1];
    delete this.data[this.length - 1];
    this.length--;
    return value;
  }

  remove(index) {
    let value = this.data[index];
    this.shiftItems(index);
    return value; 
  }

  shiftItems(index) {
    for (let i = index; i < this.length - 1; i++) {
      this.data[i] = this.data[i+1];
    }

    delete this.data[this.length - 1];
    this.length--;
  }
}

let test = new MyArray();
test.push('Info');
test.push('More info');
test.push('Just another word');
console.log(test);
test.remove(2);
console.log(test);
