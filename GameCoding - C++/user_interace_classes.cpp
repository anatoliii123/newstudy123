// contain nothing but pure virtual functions they form the top level of any class hierarchy

class IAnimation
{
    public:
    virtual void VAdvance(const int deltaMilliseconds) = 0;
    virtual bool const VAtEnd() const = 0;
    virtual int const VGetPosition() const = 0;
};

typedef std::list<IAnimation> AnimationList;

// simple behavior common for a timed animation

// how long the animation will run or wheter the animation loops;

/* any system that contains a list of objects inheriting and implementing the Ianimation interface
can animate them with a few lines of code */

for(AnimationList::iterator itr = animList.begin(); itr != animList.end(); ++itr)
{
    (*itr).VAdvance( delta );
}

