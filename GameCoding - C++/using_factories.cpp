
/* abstract factory that builds screens, this fictional game engine int his example
could define screens as componens that have screen elements, a background, and a logic class
that  accepts control messages */

/* The code that builds screens will call the methods of the IScreenFactory interface, each one returning
the different objects that make the screen including screen elements such as buttons and sprites
, a background, or the logic that runs the screen. As all interfaces classes tend to enforce design standarts
factories tend to enforce orderly construction of complicated objects.
Factories are great for screens, animations, AI, or any nontrivial game object. */

/* factories can help you construct these mechanisms at the right time. One of the neatest things about factory
design pattern is a delayed instantination feature, you could create Factory Objects, push them into a queue
and delay calling the BuildXYZ methods until you were ready. In the screen example, you might not hjave enough
memory to instantiate a screen object until the active one is destroyed. The factory object is tiny, 
perhaps a few tens of bytes and can easily exist in memory until you are ready to fire it */
class SaveGameScreenFactory : public IScreenFactory
{
    public:
    SaveGameScreenFactory();

    virtual IScreenElements * const BuildScreenElements() const;
    virtual ScreenBackgroundSprite * const BuildScreenBackgroundSprite(); const;
    virtual IScreenLogic * const BuildScreenLogic() const;
}

/* a constructor creates a single object and a factory creates and assembles those objects
into a working mechanism of some sort */