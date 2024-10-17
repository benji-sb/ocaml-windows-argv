let do_it () =
  let nbargs = Array.length Sys.argv in
  Printf.printf "Program was called with %i args:\n" nbargs;
  print_endline ",--------";
  Array.iter (fun s -> Printf.printf "| %s\n" s) Sys.argv;
  print_endline "`--------"

let _s = do_it ()
