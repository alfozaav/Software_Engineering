// keys and values
// the hash function transforms the key into the id in memory

class HashTable {
  constructor(size) {
    this.data = []; 
  }
  // [[key1, value1], [key2, value2]]
  _hash(key) {
    let hash = 0;
    for (let i = 0; i < key.length; i++) {
      hash = (hash + key.charCodeAt(i) * i) % this.data.length;
    }
    return hash;
  }

  set(key, value) {
    let info = [key, value];
    this.data.push(info);
  }

  get(key) {
    for (let i = 0; i < this.data.length; i++) {
      if (this.data[i][0] == key) {
        return this.data[i][1];
      }
    }
  }
}

let test = new HashTable(50);
test.set('name', 'Cristofer');
test.set('lastName', 'Nava');
console.log(test.data);
console.log(test.get('gurbi'));
