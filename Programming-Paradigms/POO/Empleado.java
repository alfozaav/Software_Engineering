public class Empleado {
    private String name;
    private double salary;

    public Empleado(String name, double salary) {
        this.name = name;
        this.salary = salary;
    }

    //  Getters and setters
    public void setSalary(double salary) throws Exception {
        if (salary >= 0 && this.credit()) {
            this.salary = salary;
        } else {
            throw new Exception("Salario no válido");
        }
    }

    //  Helpers functions
    private boolean credit() {
        //
        return true;
    }

    public double getSalary() {
        return this.salary;
    }

    @Override
    public String toString() {
        return String.format("%s", this.name);
    }
}
