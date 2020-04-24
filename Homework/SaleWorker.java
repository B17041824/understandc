package Homework;

public class SaleWorker implements AllEmployee{
    private String name;
    private double amountMoney;
    private double basicSalary;

    public SaleWorker(String name, double amountMoney, double basicSalary) {
        this.name = name;
        this.amountMoney = amountMoney;
        this.basicSalary = basicSalary;
    }

    @Override
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getAmountMoney() {
        return amountMoney;
    }

    public void setAmountMoney(double amountMoney) {
        this.amountMoney = amountMoney;
    }

    public double getBasicSalary() {
        return basicSalary;
    }

    public void setBasicSalary(double basicSalary) {
        this.basicSalary = basicSalary;
    }

    @Override
    public String toString() {
        return "SaleWorker{" +
                "name='" + name + '\'' +
                ", amountMoney=" + amountMoney +
                ", basicSalary=" + basicSalary +
                '}';
    }

    @Override
    public double getSalary() {
        double commission;
        if(amountMoney<10000){
            commission = amountMoney*0.1;
        }else if(amountMoney>10000&&amountMoney<100000){
            commission = amountMoney*0.15;
        }else {
            commission = amountMoney*0.18;
        }
        return commission+basicSalary;
    }
}
