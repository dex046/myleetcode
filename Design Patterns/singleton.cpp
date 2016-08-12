class Singleton
{
public:
    static Singleton* getInstance()
    {
        if(instance == NULL)
        {
            {
                mutexlock(mutex);
                if(instance == NULL)
                {
                    instance = new Singleton();
                }
            }
        }
    }

    mutex m;
private:
    Singleton(){}
    static Singleton *instance;
    private mutex;
};
