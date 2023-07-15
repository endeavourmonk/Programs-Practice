const obj = {
    'TCS': '4.2 LPA',
    'INFY': '9 LPA',
    'Atlassian': '30 LPA',
    'Google': '15 LPA',
    'Microsoft': '16LPA',
};


let res = '';
for(const it in obj){
    res += `${it} = ${obj[it]}\n`;
}

console.log(res);