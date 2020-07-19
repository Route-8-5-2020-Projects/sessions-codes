import java.util.Vector;

public class Store extends Account {
    static private int storesCount = 0;
    private int id;
    private Vector<StoreHouse> storeHouses;
    private Vector<Product> products;


    public Store(String username, String password,
                 Vector<StoreHouse> storeHouses, Vector<Product> products) {
        super(username, password);
        this.storeHouses = storeHouses;
        this.products = products;
    }
}
