//setTimeout(() => {self.postMessage("Hello World!");},5000); 
//
self.onmessage = function (event) {
	var x=0;
	for (var i = 0; i < 2000000000; i++) {
		x = x+i;
	}
	self.postMessage(x);
	self.close();
}