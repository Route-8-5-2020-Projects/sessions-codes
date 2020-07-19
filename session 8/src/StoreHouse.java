public class StoreHouse {
    static private int storeHousesCount = 0;
    private int id;
    private int blockNumber;

    public int getId() {
        return id;
    }

    public int getBlockNumber() {
        return blockNumber;
    }

    public void setBlockNumber(int blockNumber) {
        this.blockNumber = blockNumber;
    }

    public StoreHouse(int blockNumber) {
        this.id = storeHousesCount;
        storeHousesCount++;
        this.blockNumber = blockNumber;
    }
}
