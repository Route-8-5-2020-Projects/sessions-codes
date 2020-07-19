public class Notification {
    private String storeName, productName, date;

    public String getStoreName() {
        return storeName;
    }

    public String getProductName() {
        return productName;
    }

    public String getDate() {
        return date;
    }

    public Notification(String storeName, String productName, String date) {
        this.storeName = storeName;
        this.productName = productName;
        this.date = date;
    }
}
