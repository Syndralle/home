# Chapter 1

## hog

    def dice():
        nonlocal index
        index = (index + 1) % len(outcomes)
        return outcomes[index]
