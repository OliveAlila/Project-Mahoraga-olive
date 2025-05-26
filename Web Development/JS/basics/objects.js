const person = {
    firstName: "Karume",
    lastName: "Daniel",
    course: "Computer Science",
    height: 200,

    intro: function selfIntro() {
        return `My name is ${this.firstName} ${this.lastName}`;
    },
}


console.log(person["intro"]());
