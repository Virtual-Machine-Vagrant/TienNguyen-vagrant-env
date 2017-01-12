# define some variables
class box {
  $user = 'vagrant'
  $group = 'vagrant'
}

# just import all manifests
# into main execution context
import "steps/*.pp"
