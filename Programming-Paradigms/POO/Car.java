public class Car {
    //  Definir las propiedades
    //  Atributos de clase (cómo es)
    public String brand;
    public String model;
    public String engine;
    public Integer power;
    public String status;

    //  Métodos (qué puede hacer)
    //  Constructor, se ejecuta cuando el objeto se crea
    public Car(String brandp, String modelp, String enginep, Integer powerp ){
        brand = brandp;
        model = modelp;
        engine = enginep;
        power = powerp;
        status = "apagado";
    }

    public void turnUp() {
        status = "encendidio";
    }

    public void shutDown() {
        status = "apagado";
    }
}
