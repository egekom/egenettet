<?php 

/**
 * Helper method used to lookup CMIS object from request.
 * 
 */


/**
 * Returns a friendly file size from byte value
 *
 * @param $filesize
 *   A string containing the file size in bytes e.g. 1073744939.
 *
 * @param $precision
 *   An integer denoting the amount of decimal places the file size should be rounded to.
 *
 * @return
 *   A string containing a friendly file size e.g 1MB.
 */
function _cmis_search_tidySize ($bytes, $precision = 0) { 
    $units = array('B', 'KB', 'MB', 'GB', 'TB'); 

    $bytes = max($bytes, 0); 
    $pow = floor(($bytes ? log($bytes) : 0) / log(1024)); 
    $pow = min($pow, count($units) - 1); 

    $bytes /= pow(1024, $pow);

    return round($bytes, $precision) . ' ' . $units[$pow]; 
}  

/**
 * Returns a friendly file size from byte value
 *
 * @param $mimetype
 *   A string containing the file mimetype.
 *
 * @return
 *   A string containing a friendly file size e.g 1MB.
 */
function _cmis_search_tidyMime ($mimetype){
  switch ($mimetype) {
    case "text/plain":
	  return array("image" => "text-64.png", "type" => "text");
      break;
    case "application/vnd.openxmlformats-officedocument.wordprocessingml.template": case "application/msword" : case "application/vnd.openxmlformats-officedocument.wordprocessingml.document": 
  	  return array("image" => "doc-64.png", "type" => "MS Word");
      break;
    case "application/vnd.ms-excel": case "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet": case "application/vnd.openxmlformats-officedocument.spreadsheetml.template":
  	  return array("image" => "xls-64.png", "type" => "MS Excel");
      break;
    case "application/vnd.openxmlformats-officedocument.presentationml.slideshow": case "application/vnd.ms-powerpoint": case "application/vnd.openxmlformats-officedocument.presentationml.presentation": case "application/vnd.openxmlformats-officedocument.presentationml.template":
  	  return array("image" => "ppt-64.png", "type" => "MS Powerpoint");
      break;  
    case "text/html":
  	  return array("image" => "html-64.png", "type" => "HTML");
      break;
    case "application/pdf":
  	  return array("image" => "pdf-64.png", "type" => "PDF");
      break;
    case "image/png": case "image/jpeg": case "image/gif":
  	  return array("image" => "img-64.png", "type" => "Image");
    default:
  	  return array("image" => "generic-64.png", "type" => $mimetype);
  }
}


