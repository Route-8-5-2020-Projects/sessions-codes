import java.util.Vector;

public class Shop {
    private Vector<Customer>customers;
    private Vector<Store>stores;

    private int findCustomerByMobileNumber(String mobileNumber)
    {
        for(int i = 0 ; i < customers.size() ; i++) {
            if (customers.elementAt(i).getMobileNumber().equals(mobileNumber)) {
                return i;
            }
        }
        return -1;
    }
    public boolean addCustomer(Customer customer)
    {
        if(findCustomerByMobileNumber(customer.getMobileNumber()) != -1)
            return false;
        customers.add(customer);
        return true;
    }

    public int loginCustomer(String mobileNumber, String password)
    {
        int customerIndex = findCustomerByMobileNumber(mobileNumber);
        if(customerIndex == -1)
            return -1;
        if(customers.elementAt(customerIndex).getPassword().equals(password))
            return customerIndex;
        else
            return -1;
    }

    private int findStoreByUsername(String username)
    {
        for(int i = 0 ; i < stores.size() ; i++) {
            if (stores.elementAt(i).getUsername().equals(username)) {
                return i;
            }
        }
        return -1;
    }

    public boolean addStore(Store store)
    {
        if(findStoreByUsername(store.getUsername()) != -1)
            return false;
        stores.add(store);
        return true;
    }

    public int loginStore(String username, String password)
    {
        int storeIndex = findStoreByUsername(username);
        if(storeIndex == -1)
            return -1;
        if(stores.elementAt(storeIndex).getPassword().equals(password))
            return storeIndex;
        else
            return -1;
    }

    public Shop()
    {
        customers = new Vector<>();
        stores = new Vector<>();
    }
}
