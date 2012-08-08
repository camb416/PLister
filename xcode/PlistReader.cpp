
#include "PlistReader.h"


PlistReader::PlistReader()
{
    list =  XmlTree(loadResource( "RECIPES.plist" ) );
    CameronParse(list);
}

void PlistReader::trace(string k)
{
    XmlTree tree = fetch(k);
    //XmlTree tree = list;
    //for( XmlTree::Iter child = tree.begin(); child != tree.end(); ++child)
    //    traverse(*child);
}

void PlistReader::traverse(XmlTree t)
{
    cout << t.getTag() << " : ";
    cout << t.getValue() << endl;
    for( XmlTree::Iter child = t.begin(); child != t.end(); ++child)
        traverse(*child);
}

XmlTree PlistReader::fetch(string k)
{
 /*   for ( XmlTree::Iter child = list.begin(); child != list.end(); ++child)
    {
        console() << child->getValue();
        if (k.compare(child->getValue()) == 0)
        {
            console() << "they're equal!" << endl;
            return *child;
        }
    }
    XmlTree emptyTree; 
    return emptyTree;   */
    return fetchTraverse(list, k);
}

XmlTree PlistReader::fetchTraverse(XmlTree t, string k)
{
    console() << t.getValue() << endl;
    if (t.getValue().compare(k) == 0)
        return t;
    
    XmlTree newT = t;
    
    if (t.hasChild("dict"))
        newT = t.getChild("dict");
    
    t = newT;
    // stuff
    for( XmlTree::Iter child = t.begin(); child != t.end(); ++child)
    {
        fetchTraverse(*child, k);
    }
}

//XmlTree doc( loadFile( "C:\\somexml.xml" ) );
void PlistReader::CameronParse(XmlTree t){
    for( XmlTree::Iter item = t.begin(); item != t.end(); ++item ) {
        console() << "Node: " << item->getTag() << " Value: " << item->getValue() << endl;
        if(t.hasChildren()
    }
}