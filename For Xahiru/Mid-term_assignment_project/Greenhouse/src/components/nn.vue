<script setup>
import { ref, onMounted, onUnmounted } from 'vue';
import { useRouter } from 'vue-router';

const router = useRouter();
const metrics = ref([
  {
    title: "Temperature",
    value: "24°C",
    icon: "fas fa-thermometer-half",
    color: "#e74c3c"
  },
  {
    title: "Humidity",
    value: "65%",
    icon: "fas fa-tint",
    color: "#16a085"
  },
  {
    title: "Soil Moisture",
    value: "45%",
    icon: "fas fa-water",
    color: "#f39c12"
  },
  {
    title: "Light Level",
    value: "300 lux",
    icon: "fas fa-sun",
    color: "#3498db"
  }
]);

onMounted(() => {
    const user = localStorage.getItem("user");
    if (!user) {
        router.push({ name: 'Login' });
    }
});

const logout = async () => {
    localStorage.removeItem("user");
    window.location.href = '/login';
};

// Function to generate random data
const generateRandomValue = (min, max, unit) => {
  return `${(Math.random() * (max - min) + min).toFixed(1)}${unit}`;
};

// Function to update each metric with random values
const updateMetrics = () => {
  metrics.value = [
    {
      ...metrics.value[0],
      value: generateRandomValue(15, 30, '°C') // Temperature
    },
    {
      ...metrics.value[1],
      value: generateRandomValue(30, 70, '%') // Humidity
    },
    {
      ...metrics.value[2],
      value: generateRandomValue(20, 80, '%') // Soil Moisture
    },
    {
      ...metrics.value[3],
      value: generateRandomValue(300, 1000, ' lux') // Light Level
    }
  ];
};

// Set interval to update metrics every 3 seconds
let interval;
onMounted(() => {
  updateMetrics(); // Initial load
  interval = setInterval(updateMetrics, 3000);
});

onUnmounted(() => {
  clearInterval(interval); // Clear interval on component unmount
});
</script>