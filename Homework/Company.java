package Homework;

import java.util.ArrayList;
import java.util.Arrays;

public class Company {
    private ArrayList<AllEmployee> employeeArrayList;
    private AllEmployee[] employee;

    public Company(ArrayList<AllEmployee> employees, AllEmployee[] employee) {
        this.employeeArrayList = employees;
        this.employee = employee;
    }
    public Company(){

    }

    public Company(AllEmployee[] employee){
        this.employee = employee;
    }

    public AllEmployee[] getEmployee() {
        return employee;
    }

    public void setEmployee(AllEmployee[] employee) {
        this.employee = employee;
    }

    public void deleteByName(String name){
        AllEmployee[] employees = new AllEmployee[employee.length];
        for(int i=0; i<employee.length;i++){
            if(!this.employee[i].getName().equals(name)){
                employees[i] = this.employee[i];
            }
        }
        this.employee = employees;

    }

    public double showSalaryByName(String name) {
        double salary=0;
        for(int i=0;i<employee.length;i++){
            if(this.employee[i].getName().equals(name)){
                salary = this.employee[i].getSalary();
            }
        }
        return salary;
    }


    public double showAllWorkerSalary(){
        double AllSalarySum = 0;
        for(int i=0;i<employee.length;i++){
            AllSalarySum = AllSalarySum+employee[i].getSalary();
        }
        return AllSalarySum;
    }

    @Override
    public String toString() {
        return "Company{" +
                "employee=" + Arrays.toString(employee) +
                '}';
    }

}
