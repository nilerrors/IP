def list2dict(l1, l2):
    if len(l1) != len(l2):
        return

    return {l1[i]: l2[i] for i in range(len(l1))}

