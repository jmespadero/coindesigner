WHAT IT IS:

This directory contains source code for the 'ivfix' utility, used to
restructure Inventor scene graphs for improved rendering performance.

-----------------------------------------------------------------------------


WHAT IT DOES:

ivfix processes a scene graph in two phases. The first phase figures
out how the scene graph is organized, and tries to sort it a better
way to take advantage of coherence. For example, it tries to organize
subgraphs by common textures, since switching textures is expensive.
Once sorted, it also tries to combine subgraphs so that the final
result has fewer nodes.

The second phase consists of "flattening" the subgraphs that result
from the first phase. This tesselates all shapes into little triangles
that are then organized into triangle strips.

-----------------------------------------------------------------------------

HOW IT DOES IT:

Phase 1 is broken into the following steps:

Collecting:
  All shapes in the scene are found and stored with their properties
  in specialized Shape data structures.

Sorting:
  The Shape data structures are sorted based on differences in
  properties, ranked by frequency of change and cost.

Merging:
  Some shapes can be merged into the same group if certain conditions
  hold.

Building:
  A scene graph is constructed from the sorted, merged list of Shape
  data structures. Phase 2 is then applied to the leaf groups of this
  graph.

Phase2 (for each subgraph) consists of these steps:

Flattening:
  This applies a callback action to tesselate all shapes into little
  triangles.

Condensing:
  This removes duplicate coordinates created in the flattening
  process.

Stripping:
  This produces triangle strips from the individual triangles.

-----------------------------------------------------------------------------

WHAT IT DOES NOT DO:

It does not try to preserve anything from the original graph. Some
nodes (many properties) carry through untouched from the original
scene, so any names or connections on those nodes will end up in the
final scene. Others are thrown away. Instances of shapes will most
likely be broken.

(It does preserve Switch, File, and LevelOfDetail nodes rather than trying
to figure out the right thing to do with their children.)

The moral: if you want to make sure ivfix does not screw up part of
your scene, separate that part out before fixing the rest.

-----------------------------------------------------------------------------

WHAT IT SHOULD DO, BUT DOESN'T YET (aka BUGS):

Deal with ignore flags in materials, etc.

Deal with huge files better without running out of memory.

-----------------------------------------------------------------------------

HOW IT IS DIFFERENT FROM THE OLD IVQUICKEN:

- ivquicken left most shapes alone; it converted only certain face
  sets into triangle strips. ivfix converts all shapes (even primitive
  ones like spheres and cubes) into triangle strips.

- ivquicken's triangle-stripification code was pretty slow. ivfix's is
  fast, fast, fast.

- ivquicken did a lot of work to (try to) preserve the overall structure 
  of a scene graph, including node names and field connections. ivfix
  doesn't bother with that.
