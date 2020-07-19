public class Product {
    static private int productsCount = 0;
    private int id;
    private String name;
    private String status;
    private double price;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getStatus() {
        return status;
    }

    public void setStatus(String status) {
        this.status = status;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public int getId() {
        return id;
    }

    public Product(String name, String status, double price) {
        this.id = productsCount;
        productsCount++;
        this.name = name;
        this.status = status;
        this.price = price;
    }
}
