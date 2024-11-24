<template>
    <div class="dashboard">
      <h2>Dashboard</h2>
      <div class="metrics">
        <div v-for="metric in metrics" :key="metric.name" class="card">
          <h3>{{ metric.name }}</h3>
          <p>{{ metric.value }}</p>
        </div>
      </div>
    </div>
  </template>
  
  <script>
  import axios from 'axios';
  
  export default {
    data() {
      return {
        metrics: [
          { name: 'Temperature', value: '--' },
          { name: 'Humidity', value: '--' },
          { name: 'Soil Moisture', value: '--' },
          { name: 'Light Level', value: '--' }
        ]
      };
    },
    created() {
      this.fetchData();
    },
    methods: {
      async fetchData() {
        setInterval(() => {
          this.metrics = [
            { name: 'Temperature', value: `${Math.random() * 30 + 15} °C` },
            { name: 'Humidity', value: `${Math.random() * 50 + 40} %` },
            { name: 'Soil Moisture', value: `${Math.random() * 100} %` },
            { name: 'Light Level', value: `${Math.random() * 1000} lux` }
          ];
        }, 5000);
      }
    }
  };
  </script>
  
  <style scoped>
  .dashboard {
    padding: 20px;
  }
  .metrics {
    display: flex;
    justify-content: space-between;
  }
  .card {
    width: 22%;
    padding: 20px;
    background-color: #f4f4f4;
    border-radius: 5px;
  }
  </style>  