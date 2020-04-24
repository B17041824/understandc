package Homework;

public class FormalEmployee implements AllEmployee {
    private String name;
    private int workTime;
    private double basicSalary;

    public FormalEmployee(String name, int workTime, double basicSalary) {
        this.name = name;
        this.workTime = workTime;
        this.basicSalary = basicSalary;
    }

    @Override
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getWorkTime() {
        return workTime;
    }

    public void setWorkTime(int workTime) {
        this.workTime = workTime;
    }

    public double getBasicSalary() {
        return basicSalary;
    }

    public void setBasicSalary(double basicSalary) {
        this.basicSalary = basicSalary;
    }

    @Override
    public String toString() {
        return "EmployeeIFM{" +
                "name='" + name + '\'' +
                ", workTime=" + workTime +
                ", basicSalary=" + basicSalary +
                '}';
    }
    @Override
    public double getSalary(){
        double overTime = 0;
        if(workTime>196){
            overTime = (workTime-196)*200;
        }
        return overTime+basicSalary;
    }
}
