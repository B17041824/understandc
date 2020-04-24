package Homework;

public class HourWorker implements AllEmployee {
    private String name;
    private double hourSalary;
    private int workTime;

    public HourWorker(String name, double hourSalary, int workTime) {
        this.name = name;
        this.hourSalary = hourSalary;
        this.workTime = workTime;
    }

    @Override
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getHourSalary() {
        return hourSalary;
    }

    public void setHourSalary(double hourSalary) {
        this.hourSalary = hourSalary;
    }

    public int getWorkTime() {
        return workTime;
    }

    public void setWorkTime(int workTime) {
        this.workTime = workTime;
    }

    @Override
    public String toString() {
        return "HourWorker{" +
                "name='" + name + '\'' +
                ", hourSalary=" + hourSalary +
                ", workTime=" + workTime +
                '}';
    }

    @Override
    public double getSalary(){
        return workTime*hourSalary;
    }
}
