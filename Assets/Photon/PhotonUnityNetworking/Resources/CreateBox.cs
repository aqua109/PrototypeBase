using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateBox : MonoBehaviour
{
    public GameObject crate;
    public List<GameObject> crates = new List<GameObject>();
    int listLength;
    GameObject lastCrate;

    public void createBox()
    {
        GameObject newCrate = Instantiate(crate, new Vector3(4, 1, -2), Quaternion.identity);
        crates.Add(newCrate);
    }

    public void removeBox()
    {
        listLength = crates.Count;
        lastCrate = crates[listLength-1];
        crates.Remove(lastCrate);
        Destroy(lastCrate);
    }
}
