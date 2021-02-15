// ------------
// structures
// ------------

auto ann_GLFWgamepadstate = make_smart<GLFWgamepadstate_GeneratedAnnotation>(lib);
addAnnotation(ann_GLFWgamepadstate);
auto ann_GLFWgammaramp = make_smart<GLFWgammaramp_GeneratedAnnotation>(lib);
addAnnotation(ann_GLFWgammaramp);
auto ann_GLFWvidmode = make_smart<GLFWvidmode_GeneratedAnnotation>(lib);
addAnnotation(ann_GLFWvidmode);
auto ann_GLFWimage = make_smart<GLFWimage_GeneratedAnnotation>(lib);
addAnnotation(ann_GLFWimage);
initRecAnnotation(ann_GLFWgamepadstate,lib);
initRecAnnotation(ann_GLFWgammaramp,lib);
initRecAnnotation(ann_GLFWvidmode,lib);
initRecAnnotation(ann_GLFWimage,lib);

