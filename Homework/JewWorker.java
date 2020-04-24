package Homework;

public class JewWorker implements AllEmployee {
    private String name;
    private int jewNumber;

    public JewWorker(String name, int jewNumber) {
        this.name = name;
        this.jewNumber = jewNumber;
    }

    @Override
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getJewNumber() {
        return jewNumber;
    }

    public void setJewNumber(int jewNumber) {
        this.jewNumber = jewNumber;
    }

    @Override
    public String toString() {
        return "JewWorker{" +
                "name='" + name + '\'' +
                ", jewNumber=" + jewNumber +
                '}';
    }

    @Override
    public double getSalary() {
        return jewNumber*50;
    }
}
