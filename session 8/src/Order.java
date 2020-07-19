public class Order {
    static private int ordersCount = 0;
    private int id, productID, storeHouseID;

    public int getId() {
        return id;
    }

    public int getProductID() {
        return productID;
    }

    public int getStoreHouseID() {
        return storeHouseID;
    }

    public Order(int productID, int storeHouseID) {
        this.id = ordersCount++;
        this.productID = productID;
        this.storeHouseID = storeHouseID;
    }
}
