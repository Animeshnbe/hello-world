var workerFor = new Worker('../workers/for.js');

/*
workerFor.addEventListener('message', function(event) {
	console.log('message received from workerFor => ', event.data);
	var div = document.getElementById('result');
	div.innerHTML = 'message received from workerFor => ' +event.data;
});

workerFor.addEventListener('error', function(event) {
	console.error('error received from workerFor => ', event);
});
*/

workerFor.onmessage = function(event) {
	var div = document.getElementById('result');
	div.innerHTML = 'message received from workerFor => ' +event.data;
};

workerFor.onerror = function(event) {
	console.error('error received from workerFor => ', event);

	var div = document.getElementById('result');
	div.innerHTML = 'Error!';
};

function loadResult(){
	var div = document.getElementById('result');
	div.innerHTML = 'loading...';

	workerFor.postMessage(null);
};