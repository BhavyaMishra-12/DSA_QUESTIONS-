const cluster = require('node:cluster');
const os = require('node:os');
// const os = require('node:http');
const numCPUs = require('node:os').availableParallelism();
const process = require('node:process');
const totalCPUs = os.cpus().length;
console.log(`numbers of cores : ${totalCPUs}`);


