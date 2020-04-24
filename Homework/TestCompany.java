package Homework;

public class TestCompany {
    public static void main(String[] args) {
        Company company = new Company();
        AllEmployee hourWorker1 = new HourWorker("Atom",10,200);
        AllEmployee hourWorker2 = new HourWorker("Bob",10,230);
        AllEmployee saleWorker1 = new SaleWorker("Candy",5000,3000);
        AllEmployee saleWorker2 = new SaleWorker("Duck",200000,3500);
        AllEmployee formalEmployee1 = new FormalEmployee("Easy",205,3600);
        AllEmployee jewWorker1 = new JewWorker("funny",30);
        AllEmployee[] employees = {hourWorker1,hourWorker2,saleWorker1,saleWorker2,formalEmployee1,jewWorker1};
//        for(int i=0;i<employees.length;i++){
//            System.out.println(employees[i]);
//        }
        System.out.println(company.toString());
        company.setEmployee(employees);
        System.out.println(company.toString());
//        company.deleteByName("Bob");
        System.out.println(hourWorker2.getSalary());
        System.out.println(company.showSalaryByName("Bob"));



      System.out.println("All the Salary:"+company.showAllWorkerSalary());



    }
}
